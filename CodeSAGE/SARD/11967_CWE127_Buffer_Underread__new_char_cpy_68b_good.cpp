#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100*2];
 memset(VAR4, '', 100*2-1);
 VAR4[100*2-1] = '';
 strcpy(VAR4, VAR2);
 FUN2(VAR4);
 }
}
#endif
