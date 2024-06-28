#ifndef VAR1
static int VAR2 = 0;
static int FUN1(int VAR3)
{
 if(VAR2)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 return VAR3;
}
void FUN4()
{
 int VAR3;
 VAR3 = -1;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 size_t VAR6,VAR7;
 int *VAR8;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR6 = VAR3 * sizeof(int);
 VAR8 = (int*)new char[VAR6];
 for (VAR7 = 0; VAR7 < (VAR9)VAR3; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 FUN5(VAR8[0]);
 delete [] VAR8;
 }
 ;
}
#endif
