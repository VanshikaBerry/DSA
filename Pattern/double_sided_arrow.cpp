#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    if(tr==1)
    {
        cout<<'1';
        return 0;
    }
    if (tr%2==0)
    {
        return 0;
    }
    int sp=1;
    while(sp<=tr-1)
    {
        cout<<' '<<' ';
        sp=sp+1;
    }
    cout<<'1';
    cout<<endl;
    int rowno=1;
    while(rowno<=(tr-1)/2)
    {
        int space=1;
        while(space<=tr-1-2*rowno)
        {
            cout<<' '<<' ';
            space=space+1;
        }
        int hash=1;
        int stno=rowno+1;
        while(hash<=rowno+1)
        {
            cout<<stno<<' ';
            hash=hash+1;
            stno=stno-1;
        }
        int sp=1;
        while(sp<=2*rowno-1)
        {
            cout<<' '<<' ';
            sp=sp+1;
        }
        int st=1;
        int stnooo=1;
        while(st<=rowno+1)
        {
            cout<<stnooo<<' ';
            st=st+1;
            stnooo=stnooo+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    int rownoo=1;
    while(rownoo<=(tr-1)/2-1)
    {
        int spac=1;
        while(spac<=2*rownoo)
        {
            cout<<' '<<' ';
            spac=spac+1;
        }
        int hashh=1;
        int stno=(tr+1)/2-rownoo;
        while(hashh<=(tr+1)/2-rownoo)
        {
            cout<<stno<<' ';
            hashh=hashh+1;
            stno=stno-1;
        }
        int spacee=1;
        while(spacee<=tr-2-2*rownoo)
        {
            cout<<' '<<' ';
            spacee=spacee+1;
        }
        int st=1;
        int stnooo=1;
        while(st<=(tr+1)/2-rownoo)
        {
            cout<<stnooo<<' ';
            st=st+1;
            stnooo=stnooo+1;
        }
        cout<<endl;
        rownoo=rownoo+1;
    }
    int spp=1;
    while(spp<=tr-1)
    {
        cout<<' '<<' ';
        spp=spp+1;
    }
    cout<<'1';
    cout<<endl;
    return 0;
}
    

/*alternate code

#include <iostream>
using namespace std;
int main()
{   int tr;
    cin>>tr;
    int rowno=1;
    while(rowno<=(tr+1)/2)
    {
        int space=1;
        while(space<=tr+1-2*rowno)
        {
            cout<<' ';
            space=space+1;
        }
        int hash=1;
        int stno=rowno;
        while(hash<=rowno)
        {
            cout<<stno;
            hash=hash+1;
            stno=stno-1;
        }
        int sp=1;
        while(sp<=2*rowno-3)
        {
            cout<<' ';
            sp=sp+1;
        }
        
        int st=1;
        int stnooo=1;
        while(st<=rowno)
        {
            if(rowno==1)
            {
                break;
            }
    
        
            cout<<stnooo;
            st=st+1;
            stnooo=stnooo+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
    
    int rownoo=1;
    while (rownoo<=(tr-1)/2)
    {
        int spp=1;
        while(spp<=2*rownoo)
        {
            cout<<' ';
            spp=spp+1;
        }
        int hashh=1;
        int stnoooo=(tr+1)/2-rownoo;
        while(hashh<=(tr+1)/2-rownoo)
        {
            cout<<stnoooo;
            hashh=hashh+1;
            stnoooo=stnoooo-1;
        }
        int sppp=1;
        while(sppp<=(tr-2)-2*rownoo)
        {
            cout<<' ';
            sppp=sppp+1;
        }
        int sttt=1;
        int startno=1;
        while(sttt<=(tr+1)/2-rownoo)
        {
            if(rownoo==(tr-1)/2)
             {
                break;
             }
             
             cout<<startno;
             sttt=sttt+1;
             startno=startno+1;
             
        }
        
        cout<<endl;
        rownoo=rownoo+1;

    }
    return 0;
}*/

