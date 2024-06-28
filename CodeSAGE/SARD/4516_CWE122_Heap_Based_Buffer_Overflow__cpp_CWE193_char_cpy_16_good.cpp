#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new char[10+1];
 break;
 }
 {
 char VAR3[10+1] = VAR4;
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
