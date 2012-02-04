
#include <stdlib.h>
#include <stdio.h>

#include "ezxml/ezxml.h"
#include "trx/list.h"

typedef struct suns_attr_map {
    char *name;
    const char *value;
} suns_attr_map_t;


int suns_host_parse_logger_xml(FILE *stream, list_t *devices, char *error);
int suns_host_parse_sunspec_data(ezxml_t sunspec_data,
				 list_t *devices,
				 char *error);
int suns_host_parse_device(ezxml_t d, list_t *devices, char *error);
int suns_parse_xml_attr(ezxml_t x, suns_attr_map_t *map);