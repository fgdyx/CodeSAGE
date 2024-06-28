#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 {
 size_t VAR6,VAR7;
 int *VAR8;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR6 = VAR2 * sizeof(int);
 VAR8 = (int*)new char[VAR6];
 for (VAR7 = 0; VAR7 < (VAR9)VAR2; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 FUN4(VAR8[0]);
 delete [] VAR8;
 }
}
#endif
