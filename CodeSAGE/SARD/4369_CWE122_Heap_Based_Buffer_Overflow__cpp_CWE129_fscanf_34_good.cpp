#ifndef VAR1
static void FUN1()
{
 int VAR2;
 unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int * VAR7 = new int[10];
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR7;
 }
 }
}
static void FUN4()
{
 int VAR2;
 unionType VAR3;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int * VAR7 = new int[10];
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR7;
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
