#ifndef VAR1
void FUN1(void * VAR2)
{
 int * * VAR3 = (int * *)VAR2;
 int * VAR4 = (*VAR3);
 {
 int VAR5[10] = {0};
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR4[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
#endif
