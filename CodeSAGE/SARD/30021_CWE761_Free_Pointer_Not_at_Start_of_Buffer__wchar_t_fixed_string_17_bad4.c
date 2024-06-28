#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 /* POTENTIAL FLAW: Initialize data to be a fixed string that contains the search character in the sinks */
 wcscpy(VAR3, VAR5);
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR3 != VAR4''; VAR3++)
 {
 if (*VAR3 == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR3);
 }
}
#endif
