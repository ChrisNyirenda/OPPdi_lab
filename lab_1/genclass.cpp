#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
    Protein(string id, string name, string sequence){setId(id); setName(name); setSequence(sequence);};
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
    Protein obj1; 
    Gene obj2; 
    
    string Newid = "ESP4321"; 
    string Newname = "PTEN"; 
    string Newsequence = "WPOITITITI"; 

    // Data input obj1 
    obj1.setId(Newid); 
    obj1.setName(Newname);
    obj1.setSequence(Newsequence); 
    // Data input obj2 
    obj2.setId("ENSG1234");
    obj2.setName("BRCA1");
    obj2.setChrom("chr1");
    obj2.setStart(43044295);
    obj2.setEnd(43170245);
    obj2.setStrand('+');
     // Output
   // cout << obj1.describe() << endl;
    //cout << obj2.describe() << endl;


    // constractor method. 


    Protein probj1("ESP4321" ,"PTEN" , "WPOITITITI" ) ; 
    cout<< probj1.id << " " << probj1.name << " " << probj1.sequence ;

    return 0;
}