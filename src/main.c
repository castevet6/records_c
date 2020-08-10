#include <stdio.h>
#include <string.h>
#include "core/record.h"

int main()
{
    Record *r = record_create();
    r->id = 1;
    strcpy(r->artist, "SATANIC WARMASTER");
    // r->artist = "SATANIC WARMASTER";
    strcpy(r->title, "Opferblut");
    //r->title = "Opferblut";
    strcpy(r->publisher, "No Colours Records");
    //r->publisher = "No Colours Records";
    r->category = VINYL;

    char buf[1024];

    record_tostring(r, buf);
    printf("%s\n", buf);

    long id = record_delete(r);
    printf("\nDeleted Id: %ld\n", id);
    
    return 0;
}
