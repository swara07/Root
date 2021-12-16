void ttree(){

fstream file;
file.open("data1.txt",ios::in);
double x,y;

TFile *output=new TFile("data1.root","recreate");
TTree *tree=new TTree("tree","tree");

tree->Branch("x",&x,"x/D");
tree->Branch("y",&y,"y/D");

while(1){
file>>x>>y;


if(file.eof())break;
cout << x << y<<endl;
tree->Fill();

}
output->Write();
output->Close();

file.close();

}