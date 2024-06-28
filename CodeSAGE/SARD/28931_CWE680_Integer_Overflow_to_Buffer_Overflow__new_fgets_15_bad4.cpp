#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 {
 size_t VAR5,VAR6;
 int *VAR7;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR5 = VAR2 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR2; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN4(VAR7[0]);
 delete [] VAR7;
 }
}
#endif
