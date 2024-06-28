#ifndef VAR1
void FUN1(int VAR2[])
{
 int VAR3 = VAR2[2];
 {
 size_t VAR4;
 int *VAR5;
 VAR5 = (int*)malloc(VAR3 * sizeof(int));
 for (VAR4 = 0; VAR4 < (VAR6)VAR3; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN2(VAR5[0]);
 free(VAR5);
 }
}
#endif
