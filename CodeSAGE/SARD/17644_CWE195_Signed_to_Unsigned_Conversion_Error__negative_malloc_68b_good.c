#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 if (VAR2 < 100)
 {
 char * VAR4 = (char *)malloc(VAR2);
 memset(VAR4, '', VAR2-1);
 VAR4[VAR2-1] = '';
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
