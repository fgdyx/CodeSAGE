#ifndef VAR1
static void FUN1(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = new char[VAR2];
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 void (*VAR5) (VAR6) = VAR7;
 VAR2 = 0;
 VAR2 = 20;
 FUN4(VAR2);
}
static void FUN5(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = new char[VAR2];
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 void (*VAR5) (VAR6) = VAR8;
 VAR2 = 0;
 fscanf(stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
