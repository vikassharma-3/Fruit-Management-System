#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

class fms
	{
        public :

char *f_name, *f_type, *f_cat, *f_stat, *f_id,*f_life,*c_name, *c_no,*c_add,*c_id;
public:

	void set_fid(char *id)
	{
		f_id=id;
	}

	void *get_fid()
	{
		return f_id;
	}


	void set_fname(char *name)
	{
		f_name = name;
	}

	char *get_fname()
	{
		return f_name;
	}


	void set_ftype(char *type)
	{
		f_type = type;
	}

	char *get_ftype()
	{
		return f_type;
	}


	void set_flife(char *life)
	{
		f_life = life;
	}

	char *get_flife()
	{
		return f_life;
	}


	void set_fcat(char *cat)
	{
		f_cat = cat;
	}

	char *get_fcat()
	{
		return f_cat;
	}


	void set_fstat(char *stat)
	{
		f_stat = stat;
	}

	char *get_fstat()
	{
		return f_stat;
	}
    void set_c_id(char *cid)
	{
		c_id=cid;
	}
	char *get_c_id()
	{
		return c_id;
	}
	void set_cname(char *name)
	{
		c_name = name;
	}

	char *get_cname()
	{
		return c_name;
	}

	void set_cno(char *no)
	{
		c_no = no;
	}

	char *get_cno()
	{
		return c_no;
	}


	void set_cadd(char *add)
	{
		c_add = add;///////////////
	}

	char *get_cadd()
	{
		return c_add;
	}
};
int main()
{
	int i;
	char b[20], c[20],e[30], f[10],h[20], k[10],j[50],a[10],d[10],g[10],ch;
    char *la,*fo,*na,*ha,*ja,*ba;
	fms obj[1];
    for(i=0;i<1;i++)
    {
    cout<<"Enter Fruit Id";
	cin>>a;
	obj[i].set_fid(a);

	cout<<"Enter Fruit name";
	cin>>b;
	obj[i].set_fname(b);

	cout<<"Enter Fruit type(summer/winter) ";
	cin>>c;
	if(strcmp(c,"summer")==0 || strcmp(c,"winter")==0)
		{
		}
		else
		{
			cout<<"Enter valid Fruit Type "<<endl<<endl;
            return 0;
		}
	obj[i].set_ftype(c);

	cout<<"Enter Fruit life(in days) ";
	cin>>d;
	obj[i].set_flife(d);

	cout<<"Enter Fruit category (dessertcuisine/fruitcocktailcusine/fruitcreamcuisine)  ";
	cin>>e;
	if(strcmp(e,"dessertcuisine")==0 || strcmp(e,"fruitcocktailcusine")|| strcmp(e,"fruitcreamcuisine")==0)
		{
		}
		else
		{
			cout<<"Enter valid Fruit Category "<<endl<<endl;
            return 0;
		}
	obj[i].set_fcat(e);

	cout<<"Enter Fruit status (available/pending) ";
	cin>>f;
	if(strcmp(f,"available")==0 || strcmp(f,"pending")==0)
		{
		}
		else
		{
			cout<<"Enter valid Fruit Status "<<endl<<endl;
            return 0;
		}
	obj[i].set_fstat(f);

	cout<<"Enter Customer Id";
	cin>>g;
	obj[i].set_c_id(g);

	cout<<"Enter Customer name";
	cin>>h;
	obj[i].set_cname(h);

	cout<<"Enter Customer Contact Number";
	cin>>k;
	obj[i].set_cno(k);

	cout<<"Enter Customer Address";
	cin>>j;
	obj[i].set_cadd(j);
    }

    ofstream ob("FMS.txt",ios::out|ios::binary);
	ob<<endl<<endl<<"------------------------------------------------------------------"<<endl<<"Detail of every fruits purchased with their details"<<endl<<endl;
		for(i=0;i<1;i++)
		{
			ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Fruit ID is "<<std::internal<<obj[i].get_fid();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Name is "<<std::internal<<obj[i].get_fname();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit type is"<<std::internal<<obj[i].get_ftype();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit life is"<<std::internal<<obj[i].get_flife();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Category is "<<std::internal<<obj[i].get_fcat();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Status "<<std::internal<<obj[i].get_fstat();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Id is "<<std::internal<<obj[i].get_c_id();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Name is "<<std::internal<<obj[i].get_cname();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Contact No. is "<<std::internal<<obj[i].get_cno();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Address is "<<std::internal<<obj[i].get_cadd();
		}

		//------------------Member 1-----------------------------------------------------------------------------
		ob<<endl<<endl<<endl<<"Fruits of summer type along with their details are ";
		for(i=0;i<1;i++)
		{
			fo = obj[i].get_ftype();
			if(strcmp(fo,"summer")==0)
			{
            ob.width(60); ob.fill('-'); ob<<endl<<endl<<std::left<<"Fruit ID is "<<std::internal<<obj[i].get_fid();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Name is "<<std::internal<<obj[i].get_fname();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit type is"<<std::internal<<obj[i].get_ftype();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit life is"<<std::internal<<obj[i].get_flife();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Category is "<<std::internal<<obj[i].get_fcat();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Status "<<std::internal<<obj[i].get_fstat();
			}
			else
			{
				ob<<endl<<endl<<"No fruits are available of summer type";
			}
		}


		ob<<endl<<endl<<endl<<"Customers which bought Apple or Papaya ";
		for(i=0;i<1;i++)
		{
			la = obj[i].get_fname();
			if(strcmp(la,"apple") || strcmp(la,"papaya")==0)
			{
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Id is "<<std::internal<<obj[i].get_c_id();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Name is "<<std::internal<<obj[i].get_cname();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Contact No. is "<<std::internal<<obj[i].get_cno();
			ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Address is "<<std::internal<<obj[i].get_cadd();
			}
			else
			{
				ob<<endl<<endl<<"No fruits are available of summer type";
			}
		}
		//----------------------------Member 3---------------------------------------------------------------

		ob<<endl<<endl<<endl<<"Customers which bought dessert cuisine fruits that belongs to winter";
		for(i=0;i<1;i++)
		{
			ba= obj[i].get_fcat();
			if(strcmp(ba,"dessertcuisine")==0)
			{
                ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Name is "<<std::internal<<obj[i].get_cname();

			}
			else
			{
				ob<<endl<<endl<<"No details available";
			}
		}
		ob<<endl<<endl<<endl<<"Customers which bought fruit cream cuisine fruits that belongs to summer";
		for(i=0;i<1;i++)
		{
			na = obj[i].get_fcat();
			if(strcmp(na,"fruitcreamcuisine")==0)
			{
                ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Name is "<<std::internal<<obj[i].get_cname();
			    ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Contact No. is "<<std::internal<<obj[i].get_cno();
			    }
			else
			{
				ob<<endl<<endl<<"No details available regarding customer which bought fruit cream cuisine";
			}
		}

		//-------------------------------Member 2-----------------------------------------------------------
		ob<<endl<<endl<<endl<<"Customers which bought fruit cocktail  cuisine fruits ";
		for(i=0;i<1;i++)
		{
			ha= obj[i].get_fcat();
			if(strcmp(ha,"fruitcocktailcusine")==0)
			{
                ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Customer Name is "<<std::internal<<obj[i].get_cname();

			}
			else
			{
				ob<<endl<<endl<<"No details available regarding fruit cocktail cuisine fruits";
			}
		}

        ob<<endl<<endl<<endl<<"Fruit Pending from Cold Storage  ";
		for(i=0;i<1;i++)
		{
			ja= obj[i].get_fstat();
			if(strcmp(ja,"pending")==0)
			{
                ob.width(60); ob.fill('-'); ob<<endl<<std::left<<"Fruit Name is "<<std::internal<<obj[i].get_fname();

			}
			else
			{
				ob<<endl<<endl<<"No Pending Fruits";
			}
		}

		ob.close();
	ifstream ob2("FMS.txt",ios::in|ios::binary);
	while(ob2.get(ch))
	{
		cout<<ch;
	}
	return 0;
}
