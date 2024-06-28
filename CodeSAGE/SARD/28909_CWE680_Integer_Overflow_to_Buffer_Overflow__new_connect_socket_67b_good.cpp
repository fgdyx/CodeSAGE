#ifndef VAR1
void FUN1(structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 size_t VAR5,VAR6;
 int *VAR7;
 VAR5 = VAR3 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR3; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN2(VAR7[0]);
 delete [] VAR7;
 }
}
#endif
