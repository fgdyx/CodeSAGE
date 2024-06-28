#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR4 < 100)
 {
 memcpy(VAR6, VAR5, VAR4);
 VAR6[VAR4] = '';
 }
 FUN2(VAR6);
 }
}
#endif
