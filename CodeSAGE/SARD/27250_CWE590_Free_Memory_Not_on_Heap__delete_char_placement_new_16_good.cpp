#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 {
 char * VAR3 = new char;
 *VAR3 = '';
 VAR2 = VAR3;
 }
 break;
 }
 FUN2(*VAR2);
 delete VAR2;
}
void FUN3()
{
 FUN1();
}
#endif
