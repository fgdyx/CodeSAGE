int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 for(VAR1 = 0; VAR1 <= 17; )
 {
 /* BAD */
 VAR2[VAR1] = '';
 VAR1++;
 }
 return 0;
}
