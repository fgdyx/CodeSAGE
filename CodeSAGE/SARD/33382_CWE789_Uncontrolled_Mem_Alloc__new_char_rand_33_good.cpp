#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR2 = VAR4;
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 VAR2 = rand();
 {
 size_t VAR2 = VAR4;
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
