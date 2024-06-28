#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 size_t VAR5,VAR6;
 int *VAR7;
 VAR5 = VAR4 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR4; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN3(VAR7[0]);
 delete [] VAR7;
 }
}
#endif
