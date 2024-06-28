#VAR1 ""
#ifndef VAR2
void FUN1()
{
 char VAR3;
 VAR3 = '';
 if(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 }
 if(1)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
#ifndef VAR5
static void FUN3()
{
 char VAR3;
 VAR3 = '';
 if(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 }
 if(0)
 {
 FUN4("");
 }
 else
 {
 if (VAR3 < VAR6)
 {
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 char VAR3;
 VAR3 = '';
 if(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 }
 if(1)
 {
 if (VAR3 < VAR6)
 {
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN6()
{
 char VAR3;
 VAR3 = '';
 if(0)
 {
 FUN4("");
 }
 else
 {
 VAR3 = 2;
 }
 if(1)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 }
}
static void FUN7()
{
 char VAR3;
 VAR3 = '';
 if(1)
 {
 VAR3 = 2;
 }
 if(1)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 }
}
void FUN8()
{
 FUN3();
 FUN5();
 FUN6();
 FUN7();
}
#endif
#ifdef VAR7
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN9(NULL) );
#ifndef VAR5
 FUN4("");
 FUN8();
 FUN4("");
#endif
#ifndef VAR2
 FUN4("");
 FUN1();
 FUN4("");
#endif
 return 0;
}
#endif
