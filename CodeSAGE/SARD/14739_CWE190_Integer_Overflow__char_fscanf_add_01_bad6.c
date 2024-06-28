#VAR1 ""
#ifndef VAR2
void FUN1()
{
 char VAR3;
 VAR3 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
}
#endif
#ifndef VAR5
static void FUN3()
{
 char VAR3;
 VAR3 = '';
 VAR3 = 2;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
}
static void FUN4()
{
 char VAR3;
 VAR3 = '';
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 if (VAR3 < VAR6)
 {
 char VAR4 = VAR3 + 1;
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
}
void FUN6()
{
 FUN3();
 FUN4();
}
#endif
#ifdef VAR7
int main(int argc, char * argv[])
{
 srand( (unsigned)FUN7(NULL) );
#ifndef VAR5
 FUN5("");
 FUN6();
 FUN5("");
#endif
#ifndef VAR2
 FUN5("");
 FUN1();
 FUN5("");
#endif
 return 0;
}
#endif
