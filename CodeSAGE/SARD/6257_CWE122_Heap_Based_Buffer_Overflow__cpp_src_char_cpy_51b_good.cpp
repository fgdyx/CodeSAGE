#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 strcpy(VAR3, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
