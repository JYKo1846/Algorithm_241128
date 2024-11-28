/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str_x;
	string str_a;
	int i, j, k, x_len, a_len, res= 0, t_res;
	bool corr; 
	
	getline(cin, str_x);
	getline(cin, str_a);
	
	x_len = str_x.length();
	a_len = str_a.length();
	
	for(i= 0; i< x_len; i++)
	{
		t_res= 0;
		
		for(j= i; j< x_len; j+=k)
		{
			corr= true;	
			for(k= 0; k< a_len; k++)
			{
				if(str_x[j+k]!= str_a[k])
				{
					corr= false;
					break;
				}
			}
			//WRONG CODE 
			/*
			for(j= i; j< x_len; j+=k+1)
			{
				corr= true;	
				for(k= 0; k< a_len; k++)
				{
					if(str_x[j+k]!= str_a[k])
					{
						corr= false;
						break;
					}
				}
				if(corr) t_res++;
			}
			
			for(i= 0; i< x_len; i++)
			{
				t_res= 0;
				k= 0;
				for(j= i; j< x_len; j+=k)
				{	
					if(str_x[j] == str_a[0])
					{
						for(k= 1; k< a_len; k++)
						{
							if(str_x[j+k]!= str_a[k])
								break;   
						}
				
						if(k == a_len) t_res++;
					}
            		if(k== 0) k++;
				}
				res = res > t_res ? res : t_res;
			}
			
			*/
/*
			if(corr) t_res++;
			if(k == 0) k++;
		}
		//cout << "res : " << res << " / t_res : " << t_res << endl;
		res = res > t_res ? res : t_res;
	}
	
	cout << res << endl;
	
	return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str_x;
	string str_a;
	int i= 0, res= 0;
	bool corr; 
	
	getline(cin, str_x);
	getline(cin, str_a);
		
	while(true)
	{
		i= str_x.find(str_a, i);
		if(i< 0)
			break;
		res++;
		i+= str_a.length();
	}
	cout << res << endl;
	return 0;
}
REASON : don't care about cannot find answer word. There is no effect about word searching start position.
It's only about don't repeat counting answer word.
*/
