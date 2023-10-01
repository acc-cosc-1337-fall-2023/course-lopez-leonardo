//add include statements
#include "func.h"
#include <string>
using std::string;

double get_gc_content(const string &dna){

    int count = 0;
    double gc_content = 0.0;

    for(auto ch : dna){
        if (ch == 'C' || ch == 'G'){
            gc_content++;
        }
        count++;
    }
    gc_content = gc_content / count;
    return gc_content;
}

string get_reverse_string(string dna){
    string reverse;

    for(int i = dna.size(); i > -1; i--){
        reverse.push_back(dna[i]);
    }

    return reverse;
}

string get_dna_complement(string dna){
    string complement = get_reverse_string(dna);
    int count = 0;

    for(auto ch : complement){

        if(ch == 'C'){
            complement[count] = 'G';
        }else if(ch == 'G'){
            complement[count] = 'C';
        }

        if(ch == 'T'){
            complement[count] = 'A';
        }else if(ch == 'A'){
            complement[count] = 'T';
        }

        count++;
    }

    return complement;
}