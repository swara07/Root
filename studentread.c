void studentread(){

    TCanvas *c=new TCanvas();
   
    TFile *input=new TFile("student.root","read");
    TH1F *histx=new TH1F("hist","histogramX",100,0,100);
    TH1F *histy=new TH1F("hist1","histogramY",100,0,100);
    TTree *tree=(TTree*)input->Get("tree");

    double x , y;
    tree->SetBranchAddress("x",&x);
    tree->SetBranchAddress("y",&y);

    int entries=tree->GetEntries();

    cout<<entries<<endl;

    for(int i=0;i<entries;i++){

        tree->GetEntry(i);
        cout<<x <<" "<<y<<endl;
        histx->Fill(x);
        histy->Fill(y);
    }

    histx->Draw();
    histy->Draw();


}


