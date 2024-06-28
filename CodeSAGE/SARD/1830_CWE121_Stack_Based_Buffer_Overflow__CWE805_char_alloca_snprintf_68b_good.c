#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 FUN2(VAR2, 100, "", VAR4);
 FUN3(VAR2);
 }
}
#endif
