#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 if (VAR4 < 100)
 {
 char * VAR5 = (char *)malloc(VAR4);
 memset(VAR5, '', VAR4-1);
 VAR5[VAR4-1] = '';
 FUN3(VAR5);
 free(VAR5);
 }
}
#endif
