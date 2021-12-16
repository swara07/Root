void fileGraph()
{


TGraph *gr=new TGraph();
gr->SetMarkerStyle(4);
gr->SetMarkerSize(3);
gr->SetLineColor(kRed);
TCanvas *c1=new TCanvas();
fstream file;
file.open("data.txt",ios::in);
double x;
double y;

while(1){

file >> x>> y;
gr->SetPoint(gr->GetN(),x,y);
if(file.eof())break;


}
gr->Draw("AL*");
}