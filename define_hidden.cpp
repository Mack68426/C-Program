#define hidden stringstream ss;\
	for(int i=0;i<lock;++i){\
		string a;ss.clear();\
		if(i==4){\
			ss<<((((i*i+900)>>3)-22)/9);\
			ss >> a;\
		}else if(i==9){\
			ss<<"00";ss<<( (i<<i) | (secret >> 10) );\
			ss<<INT32_MAX;ss>>a;\
		}else if(i==8){\
			ss<<"00";ss>>a;\
		}else if(i==7){\
			ss<<(5636982253866^secret);\
			ss>>a;\
		}else if(i==6){\
			ss<<(5636982253856^secret);ss>>a;\
		}else if(i==5){\
			ss<<"10000000010";\
			ss>>a;\
		}else{\
			ss<<((i<<i)^secret-0204*i+2020&1234|5678);\
			ss<<i*10;ss>>a;\
		}\
		if(i<5){\
			if(a==to_string(1312213^secret)){\
				locks[a].append("2370095218431171423");\
			}else if(a==to_string(1368211^secret)){locks[a].append("2375876450571169511");\
			}else if(a==to_string(1894291^secret)){locks[a].append("2375875351059541300");\
			}else if(a==to_string(1881501^secret)){locks[a].append("2372923162338362440");\
			}else if(a==to_string(1880009^secret)){locks[a].append("2373919319873332381");\
			}\
		}\
		else{\
			locks[a]="";\
		}\
		ss.str("")\
	}
