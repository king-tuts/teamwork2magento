#include "export_obj.h"

export_obj::export_obj()
{
}

export_obj::export_obj(const QStringList& anEntry, const QStringList& header)
{
    export_obj::setDataPositions(header);

    name = anEntry[namePos];

    if(name.contains('"'))
        name.replace('"', " inches");

    price = anEntry[pricePos];
    manufacturers = anEntry[manufacturersPos];
    ggsku = anEntry[ggskuPos];
    description = name;
    short_description = name;

    if(description.contains('"'))
        description.replace('"', " inches");

    if(short_description.contains('"'))
        short_description.replace('"', " inches");

    store = "admin";
    websites = "base";
    attribute_set = "Default";
    options_container = "Block after Info Column";
    msrp_enabled = "Use config";
    msrp_display_actual_price_type = "Use config";
    gift_message_available = "No";
    weight = "0.5";
    status = "Enabled";
    is_recurring = "No";
    tax_class_id = "Taxable Goods";
    qty = "1";
    min_qty = "0";
    use_config_min_qty = "1";
    is_qty_decimal = "0";
    backorders = "0";
    use_config_backorders = "1";
    min_sale_qty = "1";
    use_config_min_sale_qty = "1";
    max_sale_qty = "0";
    use_config_max_sale_qty = "1";
    is_in_stock = "1";
    use_config_notify_stock_qty = "1";
    manage_stock = "1";
    use_config_manage_stock = "1";
    is_decimal_divided = "0";
    page_layout = "No layout updates";

    QString temp = ggsku;
    temp.remove('-');
    QRegExp edit("[A-Za-z]");
}

export_obj::~export_obj()
{
}

//copy constructor
export_obj::export_obj(const export_obj& rhs)
    : ggsku {rhs.ggsku}, name {rhs.name},
      description {rhs.description}, short_description {rhs.short_description},
      category_ids {rhs.category_ids}, manufacturers {rhs.manufacturers}, price {rhs.price},
      special_price {rhs.special_price}, store {rhs.store}, websites {rhs.websites},
      attribute_set {rhs.attribute_set}, options_container {rhs.options_container},
      msrp_enabled {rhs.msrp_enabled}, msrp_display_actual_price_type {rhs.msrp_display_actual_price_type},
      gift_message_available {rhs.gift_message_available},
      weight {rhs.weight}, status {rhs.status}, is_recurring {rhs.is_recurring},
      tax_class_id {rhs.tax_class_id}, special_from_date {rhs.special_from_date},
      qty {rhs.qty}, min_qty {rhs.min_qty}, use_config_min_qty {rhs.use_config_min_qty},
      is_qty_decimal {rhs.is_qty_decimal}, backorders {rhs.backorders},
      use_config_backorders {rhs.use_config_backorders}, min_sale_qty {rhs.min_sale_qty},
      use_config_min_sale_qty {rhs.use_config_min_sale_qty}, max_sale_qty {rhs.max_sale_qty},
      use_config_max_sale_qty {rhs.use_config_max_sale_qty}, is_in_stock {rhs.is_in_stock},
      use_config_notify_stock_qty {rhs.use_config_notify_stock_qty}, manage_stock {rhs.manage_stock},
      use_config_manage_stock {rhs.use_config_manage_stock},
      is_decimal_divided {rhs.is_decimal_divided},
      page_layout {rhs.page_layout}, meta_title {rhs.meta_title},
      meta_description {rhs.meta_description}, meta_keyword {rhs.meta_keyword}
{
    previewItemList = rhs.previewItemList;
}

//move constructor
export_obj::export_obj(export_obj&& rhs)
    : ggsku {rhs.ggsku}, name {rhs.name},
      description {rhs.description}, short_description {rhs.short_description},
      category_ids {rhs.category_ids}, manufacturers {rhs.manufacturers}, price {rhs.price},
      special_price {rhs.special_price}, store {rhs.store}, websites {rhs.websites},
      attribute_set {rhs.attribute_set}, options_container {rhs.options_container},
      msrp_enabled {rhs.msrp_enabled}, msrp_display_actual_price_type {rhs.msrp_display_actual_price_type},
      gift_message_available {rhs.gift_message_available},
      weight {rhs.weight}, status {rhs.status}, is_recurring {rhs.is_recurring},
      tax_class_id {rhs.tax_class_id}, special_from_date {rhs.special_from_date},
      qty {rhs.qty}, min_qty {rhs.min_qty}, use_config_min_qty {rhs.use_config_min_qty},
      is_qty_decimal {rhs.is_qty_decimal}, backorders {rhs.backorders},
      use_config_backorders {rhs.use_config_backorders}, min_sale_qty {rhs.min_sale_qty},
      use_config_min_sale_qty {rhs.use_config_min_sale_qty}, max_sale_qty {rhs.max_sale_qty},
      use_config_max_sale_qty {rhs.use_config_max_sale_qty}, is_in_stock {rhs.is_in_stock},
      use_config_notify_stock_qty {rhs.use_config_notify_stock_qty}, manage_stock {rhs.manage_stock},
      use_config_manage_stock {rhs.use_config_manage_stock},
      is_decimal_divided {rhs.is_decimal_divided},
      page_layout {rhs.page_layout}, meta_title {rhs.meta_title},
      meta_description {rhs.meta_description}, meta_keyword {rhs.meta_keyword}
{
    previewItemList = rhs.previewItemList;
    rhs.previewItemList.clear();
}

//copy assignment
export_obj& export_obj::operator=(const export_obj& rhs)
{
    export_obj copy = rhs;
    std::swap(*this, copy);
    return *this;
}

//move assignment
export_obj& export_obj::operator=(export_obj&& rhs)
{
    std::swap(ggsku, rhs.ggsku);
    std::swap(name, rhs.name);
    std::swap(description, rhs.description);
    std::swap(short_description, rhs.short_description);
    std::swap(manufacturers, rhs.manufacturers);
    std::swap(category_ids, rhs.category_ids);
    std::swap(price, rhs.price);
    std::swap(special_price, rhs.special_price);
    std::swap(store, rhs.store);
    std::swap(websites, rhs.websites);
    std::swap(attribute_set, rhs.attribute_set);
    std::swap(options_container, rhs.options_container);
    std::swap(msrp_enabled, rhs.msrp_enabled);
    std::swap(msrp_display_actual_price_type, rhs.msrp_display_actual_price_type);
    std::swap(weight, rhs.weight);
    std::swap(status, rhs.status);
    std::swap(is_recurring, rhs.is_recurring);
    std::swap(tax_class_id, rhs.tax_class_id);
    std::swap(special_from_date, rhs.special_from_date);
    std::swap(qty, rhs.qty);
    std::swap(min_qty, rhs.min_qty);
    std::swap(use_config_min_qty, rhs.use_config_min_qty);
    std::swap(is_qty_decimal, rhs.is_qty_decimal);
    std::swap(backorders, rhs.backorders);
    std::swap(use_config_backorders, rhs.use_config_backorders);
    std::swap(min_sale_qty, rhs.min_sale_qty);
    std::swap(use_config_min_sale_qty, rhs.use_config_min_sale_qty);
    std::swap(max_sale_qty, rhs.max_sale_qty);
    std::swap(use_config_max_sale_qty, rhs.use_config_max_sale_qty);
    std::swap(is_in_stock, rhs.is_in_stock);
    std::swap(use_config_notify_stock_qty, rhs.use_config_notify_stock_qty);
    std::swap(manage_stock, rhs.manage_stock);
    std::swap(use_config_manage_stock, rhs.use_config_manage_stock);
    std::swap(is_decimal_divided, rhs.is_decimal_divided);
    std::swap(page_layout, rhs.page_layout);
    std::swap(meta_title, rhs.meta_title);
    std::swap(meta_description, rhs.meta_description);
    std::swap(meta_keyword, rhs.meta_keyword);

    std::swap(previewItemList, rhs.previewItemList);

    return *this;
}

void export_obj::printObject(QTextStream& o) const
{
    o << "store" << ",";
    o << "websites" << ",";
    o << "attribute_set" << ",";
    o << "type" << ",";
    o << "sku" << ",";
    o << "has_options" << ",";
    o << "name" << ",";
    o << "meta_title" << ",";
    o << "meta_description" << ",";
    o << "url_key" << ",";
    o << "url_path" << ",";
    o << "configurable_attributes" << ",";
    o << "options_container" << ",";
    o << "msrp_enabled" << ",";
    o << "msrp_display_actual_price_type" << ",";
    o << "gift_message_available" << ",";
    o << "price" << ",";
    o << "special_price" << ",";
    o << "weight" << ",";
    o << "status" << ",";
    o << "is_recurring" << ",";
    o << "visibility" << ",";
    o << "tax_class_id" << ",";
    o << "manufacturers" << ",";
    o << "description" << ",";
    o << "short_description" << ",";
    o << "meta_keyword" << ",";
    o << "special_from_date" << ",";
    o << "qty" << ",";
    o << "min_qty" << ",";
    o << "use_config_min_qty" << ",";
    o << "is_qty_decimal" << ",";
    o << "backorders" << ",";
    o << "use_config_backorders" << ",";
    o << "min_sale_qty" << ",";
    o << "use_config_min_sale_qty" << ",";
    o << "max_sale_qty" << ",";
    o << "use_config_max_sale_qty" << ",";
    o << "is_in_stock" << ",";
    o << "use_config_notify_stock_qty" << ",";
    o << "manage_stock" << ",";
    o << "use_config_manage_stock" << ",";
    o << "is_decimal_divided" << ",";
    o << "category_ids" << ",";
    o << "associated" << ",";
    o << "size" << ",";
    o << "page_layout" << ",";
    o << "\n";
}

const QStringList& export_obj::getPreviewList()
{
    previewItemList.clear();

    previewItemList.append("store");
    previewItemList.append("websites");
    previewItemList.append("attribute_set");
    previewItemList.append("type");
    previewItemList.append("sku");
    previewItemList.append("has_options");
    previewItemList.append("name");
    previewItemList.append("meta_title");
    previewItemList.append("meta_description");
    previewItemList.append("url_key");
    previewItemList.append("url_path");
    previewItemList.append("configurable_attributes");
    previewItemList.append("options_container");
    previewItemList.append("msrp_enabled");
    previewItemList.append("msrp_display_actual_price_type");
    previewItemList.append("gift_message_available");
    previewItemList.append("price");
    previewItemList.append("special_price");
    previewItemList.append("weight");
    previewItemList.append("status");
    previewItemList.append("is_recurring");
    previewItemList.append("visibility");
    previewItemList.append("tax_class_id");
    previewItemList.append("manufacturers");
    previewItemList.append("description");
    previewItemList.append("short_description");
    previewItemList.append("meta_keyword");
    previewItemList.append("special_from_date");
    previewItemList.append("qty");
    previewItemList.append("min_qty");
    previewItemList.append("use_config_min_qty");
    previewItemList.append("is_qty_decimal");
    previewItemList.append("backorders");
    previewItemList.append("use_config_backorders");
    previewItemList.append("min_sale_qty");
    previewItemList.append("use_config_min_sale_qty");
    previewItemList.append("max_sale_qty");
    previewItemList.append("use_config_max_sale_qty");
    previewItemList.append("is_in_stock");
    previewItemList.append("use_config_notify_stock_qty");
    previewItemList.append("manage_stock");
    previewItemList.append("use_config_manage_stock");
    previewItemList.append("is_decimal_divided");
    previewItemList.append("category_ids");
    previewItemList.append("associated");
    previewItemList.append("size");
    previewItemList.append("page_layout");

    return previewItemList;
}

void export_obj::setDataPositions(const QStringList &header)
{
    for (int i = 0; i < header.size(); i++)
    {
        QString temp = header.at(i);

        if(temp.contains("Description 4", Qt::CaseInsensitive))
            namePos = i;

        if(temp.contains("Base Price", Qt::CaseInsensitive))
            pricePos = i;

        if(temp.contains("Manufacturer", Qt::CaseInsensitive))
            manufacturersPos = i;

        if(temp.contains("Description 1", Qt::CaseInsensitive))
            ggskuPos = i;
    }
}

void export_obj::generateAssociated(const QStringList &thePluList)
{
}

const QString& export_obj::get_gg_sku() const
{
}

const QString& export_obj::get_sku() const
{
}

const QString& export_obj::get_name() const
{
}

const QString& export_obj::get_description() const
{
}

const QString& export_obj::get_short_description() const
{
}

const QString& export_obj::get_meta_title() const
{
}

const QString& export_obj::get_meta_keyword() const
{
}

const QString& export_obj::get_meta_description() const
{
}

void export_obj::set_name(const QString &x)
{
}

void export_obj::set_description(const QString &x)
{
}

void export_obj::set_short_description(const QString &x)
{
}

void export_obj::set_meta_title(const QString &x)
{
}

void export_obj::set_meta_keyword(const QString &x)
{
}

void export_obj::set_meta_description(const QString &x)
{
}

const QString& export_obj::get_size() const
{
}

const QString& export_obj::get_qty() const
{
}

void export_obj::set_sku(const QString &x)
{
}

void export_obj::set_category_ids(const QString &x)
{
}

void export_obj::set_qty(const QString &x)
{

}

void export_obj::set_visibility(const QString &x)
{

}


//#########################SIMPLE DEFINITIONS#############################

simple_obj::simple_obj(const QStringList& anEntry, const QStringList &header)
    : export_obj(anEntry, header)
{
    simple_obj::setDataPositions(header);

    sku = anEntry[skuPos];
    has_options = "0";
    visibility = "Not Visible Individually";   
    size = anEntry[sizePos];

    if(size.contains('"'))
        size.replace('"', " inches");

    type = "simple";
}

simple_obj::simple_obj()
{
}

simple_obj::~simple_obj()
{
}

//copy constructor
simple_obj::simple_obj(const simple_obj& rhs)
    : export_obj(rhs), size {rhs.size}, has_options {rhs.has_options},
      sku {rhs.sku}, visibility {rhs.visibility}, type {rhs.type}
{

}

//move constructor
simple_obj::simple_obj(simple_obj&& rhs)
    : export_obj(rhs), size {rhs.size}, has_options {rhs.has_options},
      sku {rhs.sku}, visibility {rhs.visibility}, type {rhs.type}
{

}

//copy assignment
simple_obj& simple_obj::operator=(const simple_obj& rhs)
{
    simple_obj copy = rhs;
    std::swap(*this, copy);
    return *this;
}

//move assignment
simple_obj& simple_obj::operator=(simple_obj&& rhs)
{
    export_obj::operator=(std::move(rhs));
    std::swap(size, rhs.size);
    std::swap(has_options, rhs.has_options);
    std::swap(visibility, rhs.visibility);
    std::swap(sku, rhs.sku);
    std::swap(type, rhs.type);

    return *this;
}

void simple_obj::printObject(QTextStream& o) const
{
    o << '"' << store << '"' << ",";
    o << '"' << websites << '"' << ",";
    o << '"' << attribute_set << '"' << ",";
    o << '"' << type << '"' <<  ",";
    o << '"' << sku << '"' << ",";
    o << '"' << has_options << '"' << ",";
    o << '"' << name << '"' <<  ",";
    o << '"' << meta_title << '"' << ",";
    o << '"' << meta_description << '"' << ",";
    o << ",";                               //url_key
    o << ",";                               //url_path
    o << ",";                               //configurable_attributes
    o << '"' << options_container << '"' << ",";
    o << '"' << msrp_enabled << '"' << ",";
    o << '"' << msrp_display_actual_price_type << '"' << ",";
    o << '"' << gift_message_available << '"' << ",";
    o << '"' << price << '"' << ",";
    o << '"' << special_price << '"' << ",";
    o << '"' << weight << '"' << ",";
    o << '"' << status << '"' << ",";
    o << '"' << is_recurring << '"' << ",";
    o << '"' << visibility << '"' << ",";
    o << '"' << tax_class_id << '"' <<  ",";
    o << '"' << manufacturers << '"' << ",";
    o << '"' << description << '"' << ",";
    o << '"' << short_description << '"' << ",";
    o << '"' << meta_keyword << '"' << ",";
    o << '"' << special_from_date << '"' << ",";
    o << '"' << qty << '"' << ",";
    o << '"' << min_qty << '"' << ",";
    o << '"' << use_config_min_qty << '"' << ",";
    o << '"' << is_qty_decimal << '"' << ",";
    o << '"' << backorders << '"' << ",";
    o << '"' << use_config_backorders << '"' << ",";
    o << '"' << min_sale_qty << '"' << ",";
    o << '"' << use_config_min_sale_qty << '"' << ",";
    o << '"' << max_sale_qty << '"' << ",";
    o << '"' << use_config_max_sale_qty << '"' << ",";
    o << '"' << is_in_stock << '"' << ",";
    o << '"' << use_config_notify_stock_qty << '"' << ",";
    o << '"' << manage_stock << '"' << ",";
    o << '"' << use_config_manage_stock << '"' << ",";
    o << '"' << is_decimal_divided << '"' << ",";
    o << '"' << category_ids << '"' << ",";
    o << ",";                                           //associated
    o << '"' << size << '"' << ",";
    o << '"' << page_layout << '"' << ",";
    o << "\n";
}

const QStringList& simple_obj::getPreviewList()
{
    previewItemList.clear();

    previewItemList.append(store);
    previewItemList.append(websites);
    previewItemList.append(attribute_set);
    previewItemList.append(type);
    previewItemList.append(sku);
    previewItemList.append(has_options);
    previewItemList.append(name);
    previewItemList.append(meta_title);
    previewItemList.append(meta_description);
    previewItemList.append("");                          //url_key
    previewItemList.append("");                          //url_path
    previewItemList.append("");                          //configurable_attributes
    previewItemList.append(options_container);
    previewItemList.append(msrp_enabled);
    previewItemList.append(msrp_display_actual_price_type);
    previewItemList.append(gift_message_available);
    previewItemList.append(price);
    previewItemList.append(special_price);
    previewItemList.append(weight);
    previewItemList.append(status);
    previewItemList.append(is_recurring);
    previewItemList.append(visibility);
    previewItemList.append(tax_class_id);
    previewItemList.append(manufacturers);
    previewItemList.append(description);
    previewItemList.append(short_description);
    previewItemList.append(meta_keyword);
    previewItemList.append(special_from_date);
    previewItemList.append(qty);
    previewItemList.append(min_qty);
    previewItemList.append(use_config_min_qty);
    previewItemList.append(is_qty_decimal);
    previewItemList.append(backorders);
    previewItemList.append(use_config_backorders);
    previewItemList.append(min_sale_qty);
    previewItemList.append(use_config_min_sale_qty);
    previewItemList.append(max_sale_qty);
    previewItemList.append(use_config_max_sale_qty);
    previewItemList.append(is_in_stock);
    previewItemList.append(use_config_notify_stock_qty);
    previewItemList.append(manage_stock);
    previewItemList.append(use_config_manage_stock);
    previewItemList.append(is_decimal_divided);
    previewItemList.append(category_ids);
    previewItemList.append("");                            //associated
    previewItemList.append(size);
    previewItemList.append(page_layout);

    return previewItemList;
}

void simple_obj::setDataPositions(const QStringList &header)
{
    for (int i = 0; i < header.size(); i++)
    {
        QString temp = header.at(i);

        if(temp.contains("PLU", Qt::CaseInsensitive))
            skuPos = i;

        if(temp.contains("Attribute 2", Qt::CaseInsensitive))
            sizePos = i;
    }
}

const QString& simple_obj::get_gg_sku() const
{
    return ggsku;
}

const QString& simple_obj::get_sku() const
{
    return sku;
}

const QString& simple_obj::get_name() const
{
    return name;
}

const QString& simple_obj::get_description() const
{
    return description;
}

const QString& simple_obj::get_short_description() const
{
    return short_description;
}

const QString& simple_obj::get_meta_title() const
{
    return meta_title;
}

const QString& simple_obj::get_meta_keyword() const
{
    return meta_keyword;
}

const QString& simple_obj::get_meta_description() const
{
    return meta_description;
}

void simple_obj::set_name(const QString &x)
{
    name = x;
}

void simple_obj::set_description(const QString &x)
{
    description = x;
}

void simple_obj::set_short_description(const QString &x)
{
    short_description = x;
}

void simple_obj::set_meta_title(const QString &x)
{
    meta_title = x;
}

void simple_obj::set_meta_keyword(const QString &x)
{
    meta_keyword = x;
}

void simple_obj::set_meta_description(const QString &x)
{
    meta_description = x;
}

const QString& simple_obj::get_size() const
{
    return size;
}

const QString& simple_obj::get_qty() const
{
    return qty;
}

void simple_obj::set_sku(const QString &x)
{
    sku = x;
}

void simple_obj::set_category_ids(const QString &x)
{
    category_ids = x;
}

void simple_obj::set_visibility(const QString &x)
{
    visibility = x;
}

void simple_obj::set_qty(const QString &x)
{
    qty = x;
}



//*****************************CONFIG_OBJ DEFINITIONS*****************************


config_obj::config_obj(const QStringList& anEntry, const QStringList &header)
    : export_obj(anEntry, header)
{
    configurable_attributes = "size";
    type = "configurable";
    has_options = "1";
    visibility = "Catalog, Search";
    category_ids = "158";
    associated = "uninitialized";
}

config_obj::~config_obj()
{
}

//copy constructor
config_obj::config_obj(const config_obj& rhs)
    : export_obj(rhs), configurable_attributes {rhs.configurable_attributes},
      associated {rhs.associated},
      has_options {rhs.has_options}, visibility {rhs.visibility},
      type {rhs.type}
{

}

//move constructor
config_obj::config_obj(config_obj&& rhs)
    : export_obj(rhs), configurable_attributes {rhs.configurable_attributes},
      associated {rhs.associated},
      has_options {rhs.has_options}, visibility {rhs.visibility},
      type {rhs.type}
{

}

//copy assignment
config_obj& config_obj::operator=(const config_obj& rhs)
{
    config_obj copy = rhs;
    std::swap(*this, copy);
    return *this;
}

//move assignment
config_obj& config_obj::operator=(config_obj&& rhs)
{
    export_obj::operator=(std::move(rhs));
    std::swap(configurable_attributes, rhs.configurable_attributes);
    std::swap(associated, rhs.associated);
    std::swap(has_options, rhs.has_options);
    std::swap(visibility, rhs.visibility);
    std::swap(type, rhs.type);

    return *this;
}


void config_obj::printObject(QTextStream& o) const
{
    o << '"' << store << '"' << ",";
    o << '"' << websites << '"' << ",";
    o << '"' << attribute_set << '"' << ",";
    o << '"' << type << '"' << ",";
    o << '"' << ggsku << '"' << ",";
    o << '"' << has_options << '"' << ",";
    o << '"' << name << '"' << ",";
    o << '"' << meta_title << '"' << ",";
    o << '"' << meta_description << '"' << ",";
    o << ",";                               //url_key
    o << ",";                               //url_path
    o << '"' << configurable_attributes << '"' << ",";
    o << '"' << options_container << '"' << ",";
    o << '"' << msrp_enabled << '"' << ",";
    o << '"' << msrp_display_actual_price_type << '"' << ",";
    o << '"' << gift_message_available << '"' << ",";
    o << '"' << price << '"' << ",";
    o << '"' << special_price << '"' << ",";
    o << '"' << weight << '"' << ",";
    o << '"' << status << '"' << ",";
    o << '"' << is_recurring << '"' << ",";
    o << '"' << visibility << '"' << ",";
    o << '"' << tax_class_id << '"' << ",";
    o << '"' << manufacturers << '"' << ",";
    o << '"' << description << '"' << ",";
    o << '"' << short_description << '"' << ",";
    o << '"' << meta_keyword << '"' << ",";
    o << '"' << special_from_date << '"' << ",";
    o << '"' << qty << '"' << ",";
    o << '"' << min_qty << '"' << ",";
    o << '"' << use_config_min_qty << '"' << ",";
    o << '"' << is_qty_decimal << '"' << ",";
    o << '"' << backorders << '"' << ",";
    o << '"' << use_config_backorders << '"' << ",";
    o << '"' << min_sale_qty << '"' << ",";
    o << '"' << use_config_min_sale_qty << '"' << ",";
    o << '"' << max_sale_qty << '"' << ",";
    o << '"' << use_config_max_sale_qty << '"' << ",";
    o << '"' << is_in_stock << '"' << ",";
    o << '"' << use_config_notify_stock_qty << '"' << ",";
    o << '"' << manage_stock << '"' << ",";
    o << '"' << use_config_manage_stock << '"' << ",";
    o << '"' << is_decimal_divided << '"' << ",";
    o << '"' << category_ids << '"' << ",";
    o << '"' << associated << '"' << ",";
    o << ",";                           //size
    o << '"' << page_layout << '"' << ",";
    o << "\n";
}

const QStringList& config_obj::getPreviewList()
{
    previewItemList.clear();

    previewItemList.append(store);
    previewItemList.append(websites);
    previewItemList.append(attribute_set);
    previewItemList.append(type);
    previewItemList.append(ggsku);                        //sku
    previewItemList.append(has_options);
    previewItemList.append(name);
    previewItemList.append(meta_title);
    previewItemList.append(meta_description);
    previewItemList.append("");                          //url_key
    previewItemList.append("");                          //url_path
    previewItemList.append(configurable_attributes);
    previewItemList.append(options_container);
    previewItemList.append(msrp_enabled);
    previewItemList.append(msrp_display_actual_price_type);
    previewItemList.append(gift_message_available);
    previewItemList.append(price);
    previewItemList.append(special_price);
    previewItemList.append(weight);
    previewItemList.append(status);
    previewItemList.append(is_recurring);
    previewItemList.append(visibility);
    previewItemList.append(tax_class_id);
    previewItemList.append(manufacturers);
    previewItemList.append(description);
    previewItemList.append(short_description);
    previewItemList.append(meta_keyword);
    previewItemList.append(special_from_date);
    previewItemList.append(qty);
    previewItemList.append(min_qty);
    previewItemList.append(use_config_min_qty);
    previewItemList.append(is_qty_decimal);
    previewItemList.append(backorders);
    previewItemList.append(use_config_backorders);
    previewItemList.append(min_sale_qty);
    previewItemList.append(use_config_min_sale_qty);
    previewItemList.append(max_sale_qty);
    previewItemList.append(use_config_max_sale_qty);
    previewItemList.append(is_in_stock);
    previewItemList.append(use_config_notify_stock_qty);
    previewItemList.append(manage_stock);
    previewItemList.append(use_config_manage_stock);
    previewItemList.append(is_decimal_divided);
    previewItemList.append(category_ids);
    previewItemList.append(associated);
    previewItemList.append("");                    //size
    previewItemList.append(page_layout);

    return previewItemList;
}

void config_obj::generateAssociated(const QStringList &thePluList)
{
    QString temp;
    for (int i = 0; i < thePluList.size(); i++)
    {
        temp.append(thePluList[i]);

        if(i != thePluList.size() - 1)
            temp.append(", ");
    }

    associated = temp;
}

const QString& config_obj::get_gg_sku() const
{
    return ggsku;
}

const QString& config_obj::get_name() const
{
    return name;
}

const QString& config_obj::get_description() const
{
    return description;
}

const QString& config_obj::get_short_description() const
{
    return short_description;
}

const QString& config_obj::get_meta_title() const
{
    return meta_title;
}

const QString& config_obj::get_meta_keyword() const
{
    return meta_keyword;
}

const QString& config_obj::get_meta_description() const
{
    return meta_description;
}

const QString& config_obj::get_qty() const
{
    return qty;
}

const QString& config_obj::get_size() const
{
    QString empty;

    return empty;
}

void config_obj::set_name(const QString &x)
{
    name = x;
}

void config_obj::set_description(const QString &x)
{
    description = x;
}

void config_obj::set_short_description(const QString &x)
{
    short_description = x;
}

void config_obj::set_meta_title(const QString &x)
{
    meta_title = x;
}

void config_obj::set_meta_keyword(const QString &x)
{
    meta_keyword = x;
}

void config_obj::set_meta_description(const QString &x)
{
    meta_description = x;
}

void config_obj::set_qty(const QString &x)
{
    qty = x;
}
