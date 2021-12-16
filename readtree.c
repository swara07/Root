void readtree(){

    TCanvas *c=new TCanvas();
    TFile *input=new TFile("data1.root","read");
    TH1F *hist=new TH1F("hist","histogram",100,0,20);
    TTree *tree=(TTree*)input->Get("tree");

    double x , y;
    tree->SetBranchAddress("x",&x);
    tree->SetBranchAddress("y",&y);

    int entries=tree->GetEntries();

    cout<<entries<<endl;

    for(int i=0;i<entries;i++){

        tree->GetEntry(i);
        cout<<x <<" "<<y<<endl;
        hist->Fill(x);
    }

    hist->Draw();





    //input->Close();
}