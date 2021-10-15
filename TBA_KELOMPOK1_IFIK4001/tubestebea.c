#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



bool iniSubjek(char kata[100]){
    if(kata[0]=='s'){
    	if(kata[1]=='a'){
    		if(kata[2]=='y'){
    			if(kata[3]=='a'){
    				if(kata[4]==NULL){
    					return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='k'){
		if(kata[1]=='a'){
			if(kata[2]=='m'){
				if(kata[3]=='u'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else if(kata[1]=='i'){
			if(kata[2]=='t'){
				if(kata[3]=='a'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='d'){
		if(kata[1]=='i'){
			if(kata[2]=='a'){
				if(kata[3]==NULL){
					return true;
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else if(kata[1]=='a'){
			if(kata[2]=='f'){
				if(kata[3]=='a'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else{
		return false;
	}
}

bool iniPredikat(char kata[100]){
	if(kata[0]=='m'){
		if(kata[1]=='a'){
			if(kata[2]=='k'){
				if(kata[3]=='a'){
					if(kata[4]=='n'){
						if(kata[5]==NULL){
							return true;
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else if(kata[1]=='e'){
			if(kata[2]=='m'){
				if(kata[3]=='b'){
					if(kata[4]=='a'){
						if(kata[5]=='c'){
							if(kata[6]=='a'){
								if(kata[7]==NULL){
									return true;
								}else{
									return false;
								}
							}else{
								return false;
							}
						}else{
							return false;
						}
					}else if(kata[4]=='e'){
						if(kata[5]=='l'){
							if(kata[6]=='i'){
								if(kata[7]==NULL){
									return true;
								}else{
									return false;
								}
							}else{
								return false;
							}
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else if(kata[3]=='o'){
					if(kata[4]=='t'){
						if(kata[5]=='o'){
							if(kata[6]=='n'){
								if(kata[7]=='g'){
									if(kata[8]==NULL){
										return true;
									}else{
										return false;
									}
								}else{
									return false;
								}
							}else{
								return false;
							}
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='b'){
		if(kata[1]=='e'){
			if(kata[2]=='l'){
				if(kata[3]=='a'){
					if(kata[4]=='j'){
						if(kata[5]=='a'){
							if(kata[6]=='r'){
								if(kata[7]==NULL){
									return true;
								}else{
									return false;
								}
							}else{
								return false;
							}
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}
}

bool iniObjek(char kata[100]){
	if(kata[0]=='s'){
		if(kata[1]=='a'){
			if(kata[2]=='t'){
				if(kata[3]=='e'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='k'){
		if(kata[1]=='o'){
			if(kata[2]=='r'){
				if(kata[3]=='a'){
					if(kata[4]=='n'){
						if(kata[5]==NULL){
							return true;
						}else{
							return false;
						}
					}else{
					return false;
					}
				}else{
					return false;
				}
			}
		}else if(kata[1]=='u'){
			if(kata[2]=='e'){
				if(kata[3]==NULL){
					return true;
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else if(kata[1]=='i'){
			if(kata[2]=='m'){
				if(kata[3]=='i'){
					if(kata[4]=='a'){
						if(kata[5]==NULL){
							return true;
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='b'){
		if(kata[1]=='a'){
			if(kata[2]=='j'){
				if(kata[3]=='u'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}
}

bool iniKeterangan(char kata[100]){
	if(kata[0]=='t'){
		if(kata[1]=='a'){
			if(kata[2]=='d'){
				if(kata[3]=='i'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
    }
	}else if(kata[0]=='b'){
		if(kata[1]=='a'){
			if(kata[2]=='n'){
				if(kata[3]=='y'){
					if(kata[4]=='a'){
						if(kata[5]=='k'){
							if(kata[6]==NULL){
								return true;
							}else{
								return false;
							}
						}else{
							return false;
						}
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='e'){
		if(kata[1]=='n'){
			if(kata[2]=='a'){
				if(kata[3]=='k'){
					if(kata[4]==NULL){
						return true;
					}else{
						return false;
					}
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else if(kata[0]=='i'){
		if(kata[1]=='n'){
			if(kata[2]=='i'){
				if(kata[3]==NULL){
					return true;
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else if(kata[1]=='t'){
			if(kata[2]=='u'){
				if(kata[3]==NULL){
					return true;
				}else{
					return false;
				}
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else{
		return false;
	}
}

void cekStruktur(int w, int x, int y, int z){
	if(w==1 && x==1 && y==1 && z==1){
		printf("S-P-O-K\nKALIMAT VALID\n");
	}else if(w==1 && x==1 && y!=1 && z==1){
		printf("S-P-K\nKALIMAT VALID\n");
	}else if(w==1 && x==1 && y==1 && z!=1){
		printf("S-P-O\nKALIMAT VALID\n");
	}else if(w==1 && x==1 && y!=1 && z!=1){
		printf("S-P\nKALIMAT VALID\n");
	}else{
		printf("KALIMAT TIDAK VALID\n");
	}
}

int main(){
    char kata[100];
    bool cekS, cekP, cekO, cekK;
    int w=0, x=0, y=0, z=0;
    printf("STRUKTUR KALIMAT BAHASA INDONESIA\n\n");
    printf("Kamus\t\t:\n");
    printf("Subjek\t\t: 1. saya\t2. kamu\t\t3. kita\t\t4. dia\t\t5. dafa\n");
    printf("Predikat\t: 1. makan\t2. membaca\t3. memotong\t4. belajar\t5. membeli\n");
    printf("Objek\t\t: 1. sate\t2. koran\t3. kue\t\t4. kimia\t5. baju\n");
    printf("Keterangan\t: 1. tadi\t2. banyak\t3. enak\t\t4. ini\t\t5. itu\n");
    printf("\nMasukkan Kalimat\t: ");
    scanf("%[^\n]s", &kata);
    printf("%s\n", kata);

    int init_size = strlen(kata);
    char delim[] = " ";

    char *p = strtok(kata, delim);

    while(p != NULL){
    	printf("'%s'\n", p);

    	if((cekS=iniSubjek(p))==true && w!=1){
    		printf("Subjek Valid.\n");
    		w=w+1;
		}else if((cekP=iniPredikat(p))==true && x!=1){
			printf("Predikat Valid.\n");
    		x=x+1;
		}else if((cekO=iniObjek(p))==true && y!=1){
			printf("Objek Valid.\n");
    		y=y+1;
		}else if((cekK=iniKeterangan(p))==true && z!=1){
			printf("Keterangan Valid.\n");
    		z=z+1;
		}else{
			printf("Tidak Valid.\n");
		}
		p = strtok(NULL, delim);
	}

	printf("\n");
	cekStruktur(w,x,y,z);
	return 0;

}

