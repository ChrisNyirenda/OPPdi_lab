#include <iostream>
#include <string>
#include <vector>
using namespace std;
//constractor/destructor method lab2
class Protein {
private:
    string id; 
    string name;
    string sequence;

public:
    void setId(string Newid) { id = Newid; }
    void setName(string Newname) { name = Newname; }
    void setSequence(string Newsequence) { sequence = Newsequence; }
    string getId() const { return id; }
    string getName() const { return name; }
    string describe() const { return "protein " + name + " " + sequence; }
    Protein(string id, string name, string sequence){
        setId(id); setName(name); setSequence(sequence);};
}; 

class Gene {
private:
    string id;
    string name;
    string chrom; 
    int start; 
    int end;
    char strand;

public: 
    void setId(string Newid) { id = Newid; }
    void setName(string Newname) { name = Newname; }
    void setChrom(string Newchrom) { chrom = Newchrom; }
    void setStart(int Newstart) { start = Newstart; }
    void setEnd(int Newend) { end = Newend; }
    void setStrand(char Newstrand) { strand = Newstrand; }
    Gene(string id, string name, string chrom, int start,  int end, char strand) {
        setId(id);
        setName(name);
        setChrom(chrom);
        setStart(start);
        setEnd(end);
        setStrand(strand);
    }
    string describe() const {
        return "Gene " + name + " (" + chrom + ":" + to_string(start) + "-" + to_string(end) + "," + strand + ")";
    }
}; 

int main() {
    // definening objs
    vector<Protein> proteinList;
    vector<Gene> geneList;
    Protein probj1("ESP4321" ,"PTEN" , "WPOITITITI" ) ; 
    Gene gobj2("GENE1234", "BRCA1", "chr17", 43044295, 43125482, '+');
    proteinList.push_back(probj1);
    geneList.push_back(gobj2);

    cout << probj1.describe() << endl;
    cout << gobj2.describe() << endl;
     

    return 0;
}