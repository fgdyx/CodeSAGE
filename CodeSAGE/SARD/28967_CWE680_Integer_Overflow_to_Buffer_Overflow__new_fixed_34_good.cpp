#ifndef VAR1
static void FUN1()
{
 int VAR2;
 unionType VAR3;
 VAR2 = -1;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6,VAR7;
 int *VAR8;
 VAR6 = VAR2 * sizeof(int);
 VAR8 = (int*)new char[VAR6];
 for (VAR7 = 0; VAR7 < (VAR9)VAR2; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 FUN2(VAR8[0]);
 delete [] VAR8;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
