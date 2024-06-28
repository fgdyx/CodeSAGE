#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = 20;
 }
 {
 size_t VAR4,VAR5;
 int *VAR6;
 VAR4 = VAR3 * sizeof(int);
 VAR6 = (int*)new char[VAR4];
 for (VAR5 = 0; VAR5 < (VAR7)VAR3; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 delete [] VAR6;
 }
}
void FUN3()
{
 FUN1();
}
#endif
