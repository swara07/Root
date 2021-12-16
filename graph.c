void graph(){


double x[5]={1,2,3,4,5};
double y[5]={10,20,30,40,50};

TGraph *gr=new TGraph(5,x,y);
gr->SetMarkerStyle(4);
gr->SetMarkerSize(3);
TCanvas *c1=new TCanvas();
gr->Draw("AL*");




}