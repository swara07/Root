void histogram()
{

TH1F *hist=new TH1F("histogram","histogram",100,0,100);

hist->Fill(10);
hist->Fill(90);

hist->GetXaxis()->SetTitle("X axis");
hist->GetYaxis()->SetTitle("Y axis");


TCanvas *c1=new TCanvas();
hist->Draw();

}