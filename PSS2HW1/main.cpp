#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> breakSen(const std::string &paragraph){

    vector<string> arr_of_sen;

    stringstream stream_paragraph(paragraph);
    for(string tmp; getline(stream_paragraph,tmp,'.');)
    {
        tmp.push_back('.');
        if (tmp[0] == ' ') arr_of_sen.emplace_back(++tmp.begin(),tmp.end());
        else arr_of_sen.emplace_back(tmp);
    }
    return arr_of_sen;
}


void makeUpper(ofstream & output_file,  vector<string>  arr_of_sen,  vector<string>  uppercase) {

    vector< vector<int> > gl_count(uppercase.size());

    for (int i = 0; i < uppercase.size(); i++){
        for (int j = 0; j < arr_of_sen.size(); j++){
            int pos = arr_of_sen[j].find(uppercase[i], 0);
            while (pos != -1){
                gl_count[i].push_back(j);
                while(arr_of_sen[j][pos] != ' ' && arr_of_sen[j][pos] != '.'){
                    arr_of_sen[j][pos] = toupper(arr_of_sen[j][pos]);
                    pos++;
                }
                pos = arr_of_sen[j].find(uppercase[i], pos);
            }
        }
    }

    for (int i = 0; i < uppercase.size(); i++){
        for (auto &c: uppercase[i])
            c = toupper(c);
    }                                                               // Make uppercase really upper

    for (int i = 0; i < uppercase.size(); i++){
        output_file << "Word "<< uppercase[i] <<" matched "<< gl_count[i].size() << " time(s) in the sentence(s) below:" << '\n';
        for(int j = 0; j < gl_count[i].size(); j++){
            output_file << arr_of_sen[gl_count[i][j]] << endl;
        }
    }                                                                  //Finish
}


int main() {
    ofstream output_file("C:\\Users\\user\\CLionProjects\\PSS2HW1\\out.txt");
    ifstream input_file("C:\\Users\\user\\CLionProjects\\PSS2HW1\\in.txt");
    if (!input_file.is_open())
        throw runtime_error("IN file is not open");

    if (!output_file.is_open())
        throw runtime_error("OUT file is not open");

    string paragraph;
    getline(input_file,paragraph);
    vector<string> sentence = breakSen(paragraph);
    vector<string> request;
    int N;
    input_file >> N;
    while (N--){
        string tmp;
        input_file >> tmp;
        request.push_back(tmp);
    }

    makeUpper(output_file, sentence, request);

    input_file.close();
    output_file.close();
}