#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 }
 {
 twoIntsStruct VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 0;
 VAR5[VAR6].VAR8 = 0;
 }
 }
 memcpy(VAR4, VAR5, 100*sizeof(VAR3));
 FUN2(&VAR4[0]);
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
