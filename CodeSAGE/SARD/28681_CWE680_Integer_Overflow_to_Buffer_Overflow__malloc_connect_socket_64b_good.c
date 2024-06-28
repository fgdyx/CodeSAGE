#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 size_t VAR5;
 int *VAR6;
 VAR6 = (int*)malloc(VAR4 * sizeof(int));
 for (VAR5 = 0; VAR5 < (VAR7)VAR4; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 free(VAR6);
 }
}
#endif
