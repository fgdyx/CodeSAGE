#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN3()
{
 VAR2 * VAR3;
 void (*VAR6) (VAR2 *) = VAR7;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (VAR2 *)malloc(50*sizeof(VAR2));
 FUN4(VAR3);
}
#endif
