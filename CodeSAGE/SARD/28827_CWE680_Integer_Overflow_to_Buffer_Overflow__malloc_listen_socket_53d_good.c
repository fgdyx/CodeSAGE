#ifndef VAR1
void FUN1(int VAR2)
{
 {
 size_t VAR3;
 int *VAR4;
 VAR4 = (int*)malloc(VAR2 * sizeof(int));
 for (VAR3 = 0; VAR3 < (VAR5)VAR2; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
#endif
