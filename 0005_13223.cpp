/*
BOJ 13223
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int cur[5];	// [0] : seconds / [1] : minutes / [2] : hours
	int tar[5];
	int res[5];
	int dest_i, tmp_curTime, tmp_tarTime, tmp_calTime, j;
	
	string cur_time, tar_time;
	string next_cur, next_tar;
	
	getline(cin, cur_time);
	getline(cin, tar_time);
	
	next_cur= cur_time;
	next_tar= tar_time;
	
	for(j= 2; j>= 0; j--)
	{
		if(j!=0)
			dest_i= next_cur.find(":");
		else
			dest_i= next_cur.length();
		
		tmp_curTime= ((int)next_cur[dest_i-2]-'0')*10 + ((int)next_cur[dest_i-1]-'0');
		tmp_tarTime= ((int)next_tar[dest_i-2]-'0')*10 + ((int)next_tar[dest_i-1]-'0');
		
		//cout << tmp_curTime << "\n" << tmp_tarTime << endl;
		
		cur[j]= tmp_curTime;
		tar[j]= tmp_tarTime;
		
		next_cur= cur_time.substr(dest_i+1, cur_time.length());
		next_tar= tar_time.substr(dest_i+1, tar_time.length());	
		
	}
	
	for(j= 0; j< 3; j++)
	{
		tmp_calTime= tar[j]-cur[j];
		if(j== 0)		// seconds calculation
		{
			if(tmp_calTime< 0)
			{
				tmp_calTime+= 60;
				tar[j+1]--;
				if(tar[j+1]< 0)
				{
					tar[j+1]+= 60;
					tar[j+2]--;
					if(tar[j+2]< 0)
						tar[j+2]+= 24;
				}
			}
		}
		else if(j== 1)	// minutes calculation
		{
			if(tmp_calTime< 0)
			{
				tmp_calTime+= 60;
				tar[j+1]--;
				if(tar[j+1]< 0)
				{
					tar[j+1]+= 24;
				}
			}
		}
		else
		{
			if(tmp_calTime< 0)	// hour calculation
				tmp_calTime+= 24;
		}
		
		
		res[j]= tmp_calTime;
		//cout << res[j] << ":";
	}
	
	//cout << " NEW ALGORITHM'S ANSWER : ";	
	if(res[0]== 0 && res[1]== 0 && res[2]== 0)
		res[2]= 24;
	for(j= 2; j>= 0; j--)
	{
		cout.width(2);
		cout.fill('0');
		cout << res[j];
		if(j!=0) cout << ":";
	}
	cout << endl;
		
	
	
//	// seconds calculation
//	tmp_calTime= tar[0] - cur[0];
//	if(tmp_calTime< 0)
//	{
//		tmp_calTime+= 60;
//		tar[1]--;
//		if(tar[1]< 0)
//		{
//				tar[1]+= 60;
//				tar[2]--;
//				if(tar[2]< 0)
//				{
//					tar[2]+= 24;
//				}
//		}
//	}
//	res[0]= tmp_calTime;
//	
//	//minute calculation
//	tmp_calTime= tar[1] - cur[1];
//	if(tmp_calTime< 0)
//	{
//		tmp_calTime+= 60;
//		tar[2]--;
//		if(tar[2]< 0)
//			tar[2]+= 24;
//	}
//	res[1]= tmp_calTime;
//	
//	//hour calculation
//	tmp_calTime= tar[2] - cur[2];
//	if(tmp_calTime< 0)
//		tmp_calTime+= 24;
//	res[2]= tmp_calTime;
//	
//	cout.width(2);
//	cout.fill('0');
//	cout << res[2] << ":";
//	cout.width(2);
//	cout.fill('0');
//	cout << res[1] << ":";
//	cout.width(2);
//	cout.fill('0');
//	cout << res[0] << endl;
	
	scanf("%d:%d:%d", &current_h, &current_m, &current_s);
	scanf("%d:%d:%d", &target_h, &target_m, &target_s);
	
	int currentSecond
		= current_h * 3600 + current_m * 60 + current_s;
	
	int targetSecond
		= target_h * 3600 + target_m * 60 + target_s;
		
	
	int resultSecond = targetSecond - currentSecond;
	if(resultSecond <= 0)
		resultSecond+= 24* 3600;
	
	resultHour = resultSecond / 3600;
	resultMinute = (resultSecond % 3600) / 60;
	resultSecond = resultSecond % 60;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
*/
