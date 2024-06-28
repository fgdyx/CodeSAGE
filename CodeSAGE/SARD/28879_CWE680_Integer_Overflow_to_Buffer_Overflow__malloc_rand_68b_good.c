#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 {
 size_t VAR4;
 int *VAR5;
 VAR5 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
#endif
