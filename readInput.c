void readInput(){

TH1F *hist=new TH1F("histogram","histogram",100,1,11);

fstream file;
file.open("data.txt",ios::in);
double value;
while(1){

file >>value;
hist->Fill(value);
if(file.eof())break;


}

hist->GetXaxis()->SetTitle("X axis");
hist->GetYaxis()->SetTitle("Y axis");


TCanvas *c1=new TCanvas();
hist->Draw();




}