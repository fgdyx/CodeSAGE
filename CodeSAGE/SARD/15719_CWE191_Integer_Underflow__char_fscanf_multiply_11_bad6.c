#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
 char VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 }
}
#endif
