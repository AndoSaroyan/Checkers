class Checkers
{
   public:
   void move();
   void set_board(); 
   void view ();
   

   private:
   char arr [8][8] ;
   int black_count=12;
   int white_count=12;

};



void Checkers::set_board(){
   
  
arr[1][0]='G';
arr[1][2]='G';
arr[1][4]='G';
arr[1][6]='G';
arr[6][1]='Q';
arr[6][3]='Q';  
arr[6][5]='Q';
arr[6][7]='Q';

    for(int i=0;i<3;i=i+2)
    {
      for(int j=1;j<8;j=j+2)
      {arr[i][j]='G'; }
    }


for(int i=5;i<8;i=i+2)
    {
      for(int j=0;j<8;j=j+2)
      {arr[i][j]='Q'; }
    }


for(int i=0;i<8;++i)
    {
      for(int j=0;j<8;++j){
           if(arr[i][j]!='G' && arr[i][j]!='Q')
         {arr[i][j]='.';}
                         }
                           }
 
   }

void Checkers::view ()
{ 
   system ("clear");
   for(int i=0;i<8;++i)
       { std::cout<<std::endl;
      std::cout<<"________________________________"<<std::endl;
      for(int j=0;j<8;++j)
      {  
         
         if(arr[i][j]=='G')
         { std::cout<<" "<<"⛀"<<" |";}

          else if(arr[i][j]=='Q')
           {
             std::cout<<" "<<"⛂"<<" |";} 
             else {
             std::cout<<" "<<arr[i][j]<<" |";}
        
      }

      
   }

}

void Checkers::move()
{
      int x=0;
      int y=0;
      int z=0;
      int o=0;
   std::cout<<std::endl;
   std::cout<<"Set Current Position:";
   std::cin>>x;
   std::cin>>y;
   std::cout<<std::endl;
   std::cout<<"Where Move ?:";
   std::cin>>z;
   std::cin>>o;

    


     if(arr[z][o]=='.') 
     {

        if (arr[x][y]=='Q')
        {  if(arr[x-1][y-1]=='G' )
                 {
                    if(x-2==z && y-2==o)
                    { arr[x-1][y-1]=='.';
                      arr[z][o]='Q';
                      arr[x][y]='.'; 
                      --black_count;
                      if(black_count==0){std::cout<<"Lavner Aper (Spitak)"<<std::endl;
                      exit(7);}} }
                 
              if (arr[x-1][y+1]=='G'){
                 if (x-2==z && y+2==o){
                    arr[x-1][y+1]='.';
                    arr[z][o]='Q';
                    arr[x][y]='.';
                    --black_count;
                    if(black_count==0){std::cout<<"Lavner Aper (Spitak)"<<std::endl;
                    exit (7);}
                  }
              }


           
           if (o==y-1 &&  z==x-1  || o==y+1 && z==x-1){
             arr[z][o]='Q';
             arr[x][y]='.';} 
            else {std::cout<<"Error !!! -> Wrong Index(White)"<<std::endl;} 
        
        }

        if (arr[x][y]=='G')
        { 
           
           if(arr[x+1][y+1]=='Q' )
                 {
                    if(x+2==z && y+2==o)
                    { arr[x+1][y+1]=='.';
                      arr[z][o]='G';
                      arr[x][y]='.'; 
                      -- white_count;
                      if(white_count==0){std::cout<<"Qonnel er lavy Aper(Sev)"<<std::endl;
                      exit(1);}     } }
                 
              if (arr[x+1][y-1]=='Q'){
                 if (x+2==z && y-2==o){
                    arr[x+1][y-1]='.';
                    arr[z][o]='G';
                    arr[x][y]='.';
                     -- white_count;
                      if(white_count==0){std::cout<<"Qonnel er lavy Aper(Sev)"<<std::endl; 
                                  exit(1);    }}}
           
           
           if (o==y-1 && z==x+1  || o==y+1 && z==x+1) 
        {  arr[z][o]='G';
           arr[x][y]='.';}
        else {std::cout<<"Error !!! -> Wrong Index (Black)"<<std::endl;}

        }
     } 
     
     else {std::cout<<"Error !!!   Wrong Index Was Written !!!"<<std::endl;}

}