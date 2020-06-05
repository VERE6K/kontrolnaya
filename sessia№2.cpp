int str(const char* txt, const char* stroka) 
{ 
    int txtsize = 0, strsize = 0;//razmeri
     for (int i = 0; txt[i] != '\0'; ++i)
        txtsize++;

    for (int i = 0; stroka[i] != '\0'; ++i)
        strsize++;
    
    if (strsize <= txtsize) {
        int sumbol = 0; //pervii sovpad sumbol
        for (int i = 0; i < txtsize; ++i) {
            if (txt[i] != stroka[i - sumbol])
                sumbol = i + 1;
            if (i - sumbol + 1 == strsize)
                return sumbol;
        }
        return -1;
    }
    else
        return -1;
}
