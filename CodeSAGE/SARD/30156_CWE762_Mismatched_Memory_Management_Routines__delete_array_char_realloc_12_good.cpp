#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = NULL;
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 }
 else
 {
 VAR2 = NULL;
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 }
 if(FUN2())
 {
 free(VAR2);
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 }
 else
 {
 VAR2 = new char[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
 }
 else
 {
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
